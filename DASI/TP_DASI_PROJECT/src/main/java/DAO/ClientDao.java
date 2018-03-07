/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DAO;

import javax.persistence.EntityManager;
import model.Client;

/**
 *
 * @author lcastellon
 */
public class ClientDao {
    
    public static void Persister (Client c){
        EntityManager em = JpaUtil.obtenirEntityManager();
        em.persist(c);
    }
}
