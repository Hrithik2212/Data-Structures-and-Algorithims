import java.util.Stack ;

public class IntroToStacks{
    public static void main(String[] args){
        Stack<String> games = new Stack<>();
        games.add("Call of Duty Ghost");
        games.add("Guitar Hero");
        games.add("Super Monkey Bowl");
        System.out.println(games);
        System.out.println(games.pop());
        System.out.println(games);
        System.out.println(games.peek());
        System.out.println(games);
        System.out.println(games.contains("Call of Duty Ghost"));
        System.out.println(games.contains("Super Monkey Bowl"));
        System.out.println(games.empty());
        System.out.println(games.get(1));
        System.out.println(games.size());
    }
}

/* OUTPUT

[Call of Duty Ghost, Guitar Hero, Super Monkey Bowl]
Super Monkey Bowl
[Call of Duty Ghost, Guitar Hero]
Guitar Hero
[Call of Duty Ghost, Guitar Hero]
true
false
false
Guitar Hero
2

*/