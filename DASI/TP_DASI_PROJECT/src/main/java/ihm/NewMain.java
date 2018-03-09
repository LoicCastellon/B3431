/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ihm;

import DAO.JpaUtil;
import java.util.Date;
import service.Service;

/**
 *
 * @author lcastellon
 */
public class NewMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        JpaUtil.init();
        Date d = new Date(2017, 12, 25);
        Service.inscrireClient("a","b",1,"e","d","d",d);
        JpaUtil.destroy();
        
    }
    
}
