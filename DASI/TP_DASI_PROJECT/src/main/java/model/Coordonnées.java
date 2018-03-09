/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import javax.persistence.Embeddable;


/**
 *
 * @author lcastellon
 */
@Embeddable
public class Coordonnées {

    public Coordonnées() {
    }

    public String getAdresse() {
        return adresse;
    }

    public void setAdresse(String adresse) {
        this.adresse = adresse;
    }

    public String getAdresseMail() {
        return adresseMail;
    }

    public void setAdresseMail(String adresseMail) {
        this.adresseMail = adresseMail;
    }

    public int getNumeroTel() {
        return numeroTel;
    }

    public void setNumeroTel(int numeroTel) {
        this.numeroTel = numeroTel;
    }

    public Coordonnées(String adresse, String adresseMail, int numeroTel) {
        this.adresse = adresse;
        this.adresseMail = adresseMail;
        this.numeroTel = numeroTel;
    }
    String adresse;
    String adresseMail;
    int numeroTel;
}
