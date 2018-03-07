/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package service;

import DAO.ClientDao;
import dao.JpaUtil;
import java.util.Date;
import model.Client;
import model.Coordonnées;
import model.Identité;

/**
 *
 * @author lcastellon
 */
public class Service {
    
  public static void inscrireClient(String adresse, String adresseMail, int numeroTel,String civilité, String nom, String prenom, Date dateDeNaissance){
  
      Coordonnées C = new  Coordonnées( adresse,  adresseMail,  numeroTel);
      Identité I = new Identité( civilité,  nom,  prenom,  dateDeNaissance);
      Client c = new Client(I,C);
      JpaUtil.creerEntityManager();
      JpaUtil.ouvrirTransaction();
      ClientDao.Persister(c);
      JpaUtil.validerTransaction();
      JpaUtil.fermerEntityManager();
}

    
}
