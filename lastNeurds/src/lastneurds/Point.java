/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

/**
 *
 * @author yaya
 */
public class Point {
private int x;
private int y;
public enum Type{VERT,BLEU};
private Type type;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
        this.type = Type.BLEU;
        System.out.println("Création d'un point : " + this.type);
    }

    public Point(int x, int y, Type type) {
        this.x = x;
        this.y = y;
        this.type = type;
        System.out.println("Création d'un point : " + this.type);
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public Type getType() {
        return type;
    }

    public void setType(Type type) {
        this.type = type;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

}
