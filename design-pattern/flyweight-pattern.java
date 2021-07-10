/**
problem statement:
Let's take a real world example of ticket booking system. 
This system issues large number of tickets to passengers per day. 
Tickets can be of two types "ADULT" and "INFANT". 
In ticket booking system, ticket objects doesn't have much functionalities except printing itself. 

Passenger name and fare can vary depending on the ticket type. 

We can use flyweight design pattern in this scenario as every ticket of a 
particular type(let's say adult) is almost similar except it's 
extrinsic state(Name and fare) which can be passed to ticket object on runtime.

Implementation of Flyweight Design Pattern
*/

interface Ticket {
    public void setName(String name);
    public void setFare(int fare);
    public void printTicket();
}

class RailwayTicket implements Ticket {
    private String type;
    private int fare;
    private String name;
  
    public RailwayTicket(String type){
        this.type = type;
    }
  
    public void setName(String name){
        this.name = name;
    }
  
    public void setFare(int fare){
        this.fare = fare;
    }
  
    @Override
    public void printTicket(){
        System.out.println("--------TICKET--------");
        System.out.println("Name : "+ name + "\nTicket Type : "
            + type + "\nFare : " + fare);
    }
}
/*
TicketFactory is a factory class to provide Railway tickets of different types. 
It stores one instance of various ticket types in a HashMap having ticket type as key. 
It exposes a 'getTicket' method to clients, which calls this method by passing the railway ticket fields. 
*/

class TicketFactory {
    private static Map<String, Ticket> ticketMap 
        = new HashMap<String, Ticket>();
 
    public static Ticket getTicket(String type, String name, int fare){
        Ticket ticket;
        if(ticketMap.containsKey(type)){
            ticket = ticketMap.get(type);
        } else {
            ticket = new RailwayTicket(type);
            ticketMap.put(type, ticket);
        }
   
        ticket.setName(name);
        ticket.setFare(fare);
   
        return ticket;
    } 
}

// TicketBookingSystem is the client of TicketFactory, which created large number 
// of tickets on run time by calling getTicket method.

public class TicketBookingSystem {
    public static void main(String args[]) throws IOException{
      BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
      Ticket ticket;
   
       for(int i=0; i < 5; i++){
           System.out.println("Enter ticket type, Name and Fare");
           String[] stringList = br.readLine().split(" ");
           ticket = TicketFactory.getTicket(stringList[0], stringList[1],
                     Integer.parseInt(stringList[2]));
           ticket.printTicket();
       }
    }
}
