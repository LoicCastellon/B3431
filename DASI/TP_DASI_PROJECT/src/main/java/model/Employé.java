/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

/**
 *
 * @author lcastellon
 */
@Entity
public class Employé {

    @Id @GeneratedValue
    private Long ID;

    public String getNom() {
        return nom;
    }

    public void setNom(String nom) {
        this.nom = nom;
    }

    public String getPrenom() {
        return prenom;
    }

    public void setPrenom(String prenom) {
        this.prenom = prenom;
    }

    public int getnBVoyance() {
        return nBVoyance;
    }

    public void setnBVoyance(int nBVoyance) {
        this.nBVoyance = nBVoyance;
    }

    public boolean getOccupé() {
        return occupé;
    }

    public void setOccupé(boolean occupé) {
        this.occupé = occupé;
    }

    public Employé(String nom, String prenom, int nBVoyance, boolean occupé) {
        this.nom = nom;
        this.prenom = prenom;
        this.nBVoyance = nBVoyance;
        this.occupé = occupé;
    }
    String nom;
    String prenom;
    int nBVoyance;
    boolean occupé;

    public Long getID() {
        return ID;
    }

    public void setID(Long ID) {
        this.ID = ID;
    }
}
