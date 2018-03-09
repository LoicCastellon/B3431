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


public class Astrologue extends Medium {

    public Astrologue(String ecole, String promotion) {
        this.ecole = ecole;
        this.promotion = promotion;
    }

    public String getEcole() {
        return ecole;
    }

    public void setEcole(String ecole) {
        this.ecole = ecole;
    }

    public String getPromotion() {
        return promotion;
    }

    public void setPromotion(String promotion) {
        this.promotion = promotion;
    }
      
      String ecole;
      String promotion;
    
}
