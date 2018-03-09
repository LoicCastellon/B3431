/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.util.List;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

/**
 *
 * @author lcastellon
 */

@Entity
public class Medium {

    public Medium() {
    }
    @Id @GeneratedValue
    Long IdMedium;
    String nom;
    String bio;
    int nbVoyance;
    List<Employé> listeEmployé;
}
