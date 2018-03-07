/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import static java.util.Collections.list;
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
public class PersonneDAO {
    public static void Ajouter(EntityManager em,Personne p)
    {
        em.persist(p);
    }
    
    public static Personne Find(EntityManager em,long Id)
    {
        return em.find(Personne.class, Id);
    }
    
    public static List<Personne> FindQuery(Query q){
        return (List<Personne>) q.getResultList();
    }
    
}
