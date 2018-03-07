package modele;


import javax.persistence.Entity;
import javax.persistence.Id;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author izemmouri
 */
@Entity
public class Personne {
   @Id 
   private long Id;
   private String nom;
   private String prenom;
   private int age;
   
   public Personne(){
       
   }
   public Personne(long Id,String nom, String prenom, int age){
       this.Id=Id;
       this.nom=nom;
       this.prenom=prenom;
       this.age=age;
   }

    public String getNom() {
        return nom;
    }

    public String getPrenom() {
        return prenom;
    }

    public int getAge() {
        return age;
    }
    
    public long getId() {
        return Id;
    }
    
    
}
