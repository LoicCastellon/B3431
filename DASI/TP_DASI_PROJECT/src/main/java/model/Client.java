/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.util.List;
import javax.annotation.Generated;
import javax.persistence.Embedded;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

/**
 *
 * @author lcastellon
 */

@Entity
public class Client {

    public Client() {
    }

    public Client(Identité identité, Coordonnées coordonnées) {
        this.identité = identité;
        this.coordonnées = coordonnées;
    }

    public Long getIdClient() {
        return IdClient;
    }


 


    public Identité getIdentité() {
        return identité;
    }

    public void setIdentité(Identité identité) {
        this.identité = identité;
    }

    public ProfilAstro getProfilAstro() {
        return profilAstro;
    }

    public void setProfilAstro(ProfilAstro profilAstro) {
        this.profilAstro = profilAstro;
    }

    public Coordonnées getCoordonnées() {
        return coordonnées;
    }

    public void setCoordonnées(Coordonnées coordonnées) {
        this.coordonnées = coordonnées;
    }

   /* public List<Conversation> getListeConversation() {
        return listeConversation;
    }

    public void setListeConversation(List<Conversation> listeConversation) {
        this.listeConversation = listeConversation;
    }
*/
   
    @Id @GeneratedValue
    Long IdClient;
    @Embedded
    Identité identité;
    @Embedded
    ProfilAstro profilAstro=null;
    @Embedded
    Coordonnées coordonnées;
   // @Embedded
  //  List<Conversation> listeConversation;
}
