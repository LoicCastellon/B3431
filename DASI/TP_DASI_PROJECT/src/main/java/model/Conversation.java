/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;


/**
 *
 * @author lcastellon
 */


public class Conversation {

    public int getHeureD() {
        return HeureD;
    }

    public void setHeureD(int HeureD) {
        this.HeureD = HeureD;
    }

    public int getHeureF() {
        return HeureF;
    }

    public void setHeureF(int HeureF) {
        this.HeureF = HeureF;
    }

    public Conversation getConversation() {
        return conversation;
    }

    public void setConversation(Conversation conversation) {
        this.conversation = conversation;
    }

    public Medium getMedium() {
        return medium;
    }

    public void setMedium(Medium medium) {
        this.medium = medium;
    }

    public Conversation(int HeureD, int HeureF, Conversation conversation, Medium medium) {
        this.HeureD = HeureD;
        this.HeureF = HeureF;
        this.conversation = conversation;
        this.medium = medium;
    }
    int HeureD;
    int HeureF;
    Conversation conversation;
    Medium medium;
}
