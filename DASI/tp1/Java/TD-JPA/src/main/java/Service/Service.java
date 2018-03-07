/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Service;

import dao.PersonneDAO;
import java.util.List;
import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
import javax.persistence.Query;
import modele.Personne;

/**
 *
 * @author izemmouri
 */
public class Service {
    
    
    
    public static void CreerPersonne(Personne p){
       EntityManagerFactory emf = Persistence.createEntityManagerFactory("fr.insalyon.dasi_TD-JPA_jar_1.0-SNAPSHOTPU");
       EntityManager em = emf.createEntityManager();
       em.getTransaction().begin();
       PersonneDAO.Ajouter(em, p);
       em.getTransaction().commit();
       em.close();
       
   }
   
    public static void TrouverPersonne(long Id){
       EntityManagerFactory emf = Persistence.createEntityManagerFactory("fr.insalyon.dasi_TD-JPA_jar_1.0-SNAPSHOTPU");
       EntityManager em = emf.createEntityManager();
       Personne p=PersonneDAO.Find(em, Id);
       AfficherPersonne(p);
       em.close();
   }
    
    public static void AfficherPersonne(Personne p){
        System.out.println(p.getNom() + p.getPrenom() + p.getAge());
    }
    
    public static void AfficherTout(){
        EntityManagerFactory emf = Persistence.createEntityManagerFactory("fr.insalyon.dasi_TD-JPA_jar_1.0-SNAPSHOTPU");
       EntityManager em = emf.createEntityManager();
       Query query = em.createQuery("select p from Personne p");
      List<Personne> l= PersonneDAO.FindQuery(query);
     for (Personne p :l){
         AfficherPersonne(p);
     }
       em.close();
       
        
    }
    
    
    
}
