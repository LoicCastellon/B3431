/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.util.Date;
import javax.persistence.Embeddable;
import javax.persistence.Entity;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

/**
 *
 * @author lcastellon
 */

@Embeddable
public class Identité {

    public Identité() {
    }

    public String getCivilité() {
        return civilité;
    }

    public void setCivilité(String civilité) {
        this.civilité = civilité;
    }

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

    public Date getDateDeNaissance() {
        return dateDeNaissance;
    }

    public void setDateDeNaissance(Date dateDeNaissance) {
        this.dateDeNaissance = dateDeNaissance;
    }

    public Identité(String civilité, String nom, String prenom, Date dateDeNaissance) {
        this.civilité = civilité;
        this.nom = nom;
        this.prenom = prenom;
        this.dateDeNaissance = dateDeNaissance;
    }
    String civilité;
    String nom;
    String prenom;
    @Temporal(TemporalType.DATE)
    Date dateDeNaissance; 
    
}
