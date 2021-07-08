
import java.util.*;
import java.lang.*;
import java.io.*;

interface IJobMediator {

    public void createJob(Job job);

    public void applyToJob(User user, Job job);

    public void deleteJobApplication(User user, Job job);
    public void printJobDetails(Job job);

}



interface Statement {
    void print();
}


class JobMediator implements IJobMediator {
    private User user;
    private Job job;
    public boolean start, stop;

    public void createJob(Job job) {
        this.job= job;
    }

    public void applyToJob(User user, Job job) {
        this.user= user;
        job.addUser(user);
    }

    public void deleteJobApplication(User user, Job job) {
        this.user= user;
        job.removeUser(user);
    }

    public void printJobDetails(Job job){
        job.printApplications();
    }
}


class User implements Statement{
    private IJobMediator jobMediator;
    public String name;
    public User(IJobMediator jobMediator, String name) {
        this.jobMediator = jobMediator;
        this.name = name;
    }

    public String getName() {
        return this.name;
    }


    public void print() {
        System.out.println("User " + name + " is applying for the job");
    }



}

class Job implements Statement{
    private IJobMediator jobMediator;
    public String title;
    public List<User> users;

    public Job(IJobMediator jobMediator, String title) {
        this.jobMediator= jobMediator;
        this.title= title;
        this.users= new ArrayList<User>();
    }

    public void addUser(User user) {
        users.add(user);
    }

    public void removeUser(User user) {
        users.remove(user);
    }
    public String getJobName() {
        return this.title;
    }

    public void print() {
        System.out.println("Job " + title + " is posted");
    }
    public void printApplications() {
		for(User u : this.users){
            System.out.println("User: " + u.getName() + " applied for the job " + this.title);
		}
	}

}
class MediatorDesignPattern {
    public static void main(String args[]) {

        IJobMediator jobMediator = new JobMediator();
        User alamin= new User(jobMediator, "alamin");
        User miraje= new User(jobMediator, "miraje");
        User john= new User(jobMediator, "john");

        Job job1= new Job(jobMediator, "Software Engineer");
        Job job2 = new Job(jobMediator, "Software Developer");
        Job job3 = new Job(jobMediator, "Software Test");

        jobMediator.createJob(job1);
        jobMediator.createJob(job2);
        jobMediator.createJob(job3);
        jobMediator.applyToJob(alamin, job1);
        jobMediator.applyToJob(miraje, job2);
        jobMediator.applyToJob(john, job2);
        jobMediator.applyToJob(john, job3);

        System.out.println("job details: "+ job1.getJobName());
        jobMediator.printJobDetails(job1);
        System.out.println("\n");

        System.out.println("job details: "+ job3.getJobName());
        jobMediator.printJobDetails(job3);
        System.out.println("\n");

        System.out.println("job details: "+ job2.getJobName());
        jobMediator.deleteJobApplication(john, job2);
        System.out.println("\n");

        System.out.println("job details after remove: "+ job2.getJobName());
        jobMediator.printJobDetails(job2);
    }
}
