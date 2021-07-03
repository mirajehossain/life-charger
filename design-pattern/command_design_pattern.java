/**
Suppose, you wan to generate an action event in which it will detect whether an user has pressed keyboard 
or click the mouse . 
If the mouse is clicked, then it prints which action (the right or left click) 
has been performed by the user. Then if the user presses the keyboard , it just prints the name of the key of the keyboard. 
*/

import java.util.*;
import java.lang.*;
import java.io.*;

class CommandTest
{
	public static void main (String[] args)
	{
        private static final String keys[] = { "A", "B", "C", "D", "E", "DEL", "ESC", "SHIFT", "CTRL" };
        private String selectKey = keys[(int)(Math.random()*keys.length)];

        
        private static final String mKeys[] = { "leftButton", "rightButton" };
        private String selectMKey = mKeys[(int)(Math.random()*mKeys.length)];

        Keyboard keyboard = new Keyboard();  // receiver
        Command keyboardCommand = new KeyboardCommand(keyboard, selectKey); // concrete command

        Mouse mouse = new Mouse();  // receiver
        Command mouseCommand = new MouseCommand(mouse, selectMKey); // concrete command

        EventInvoker eventInvoker = new EventInvoker(keyboardCommand);
        eventInvoker.invoke();

        eventInvoker.setCommand(mouseCommand);
        eventInvoker.invoke();
	}
}

interface Command {
	public void execute();
}

class KeyboardCommand implements Command {
    
  private String selectKey;
	Keyboard keyboard;

	public KeyboardCommand(Keyboard keyboard, String key) {
		this.keyboard = keyboard;
        this.selectKey = key;
	}

	@Override
	public void execute() {
		keyboard.press(this.selectKey);
	}

}


class MouseCommand implements Command {
  private String selectKey;
	Mouse mouse;

	public MouseCommand(Mouse mouse, String key) {
		this.mouse = mouse;
        this.selectKey = key;
	}

	@Override
	public void execute() {
		mouse.click(this.selectKey);
	}

}

class Keyboard {

	public void press(String key) {
		System.out.println("Pressed " + key  + " from keyboard");
	}

}

class Mouse {

	public void click(String leftOrRight) {
		System.out.println("Clicked " + leftOrRight  + " button from mouse");
	}

}

class EventInvoker {

	Command command;

	public EventInvoker(Command command) {
		this.command = command;
	}

	public void setCommand(Command command) {
		this.command = command;
	}

	public void invoke() {
		command.execute();
	}
}
