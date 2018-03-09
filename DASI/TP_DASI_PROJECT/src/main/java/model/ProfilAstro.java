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
public class ProfilAstro {

    public ProfilAstro() {
    }
    
    String signeChinois;
    String signeZodiaque;
    String couleur;
    String animal;
               
}
