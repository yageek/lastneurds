/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

import java.util.ArrayList;

/**
 *
 * @author yaya
 */
public class Neuron {
    
    private double in;
    private double output;
    private ArrayList<Net> Entrees;
    private ArrayList<Net> Outputs;
    private double seuil;

    public void SetInAndOutput(double value){

        this.setIn(value);
       double outputActivation = this.SeuilFunction(value);
       this.setOutput(outputActivation);
               for(Net temp:this.getOutputs()){

            temp.setValue(outputActivation);
        }
    }
    public double getDerivated(){

        return this.SeuilDerivated(this.in);
    }
    public Neuron() {
        this.setIn(0);
        this.setOutput(0);
        this.Entrees = new ArrayList<Net>();
        this.Outputs = new ArrayList<Net>();
        this.setSeuil(0.5);
    }
    public void Diffuse(Truth exemple){
        double value =0;
        //on met chaque entrée de l'exemple avec les valeurs des net
        for(int i = 0; i < exemple.getEntries().size();i++){
            this.getEntrees().get(i).setValue(exemple.getEntries().get(i));
            
        }
        
        for(Net temp:this.Entrees){
            value += temp.getValue()*temp.getWeight();
        }
      //  System.out.println("Diffusion avec exemple : " + value);
        //seuil
        value-=this.getSeuil();
        this.SetInAndOutput(value);
       
        
    }
    //fonction utilisé pour le neurone de sortie
    public void Diffuse(){
         double value =0;
       
        for(Net temp:this.Entrees){
            value += temp.getValue()*temp.getWeight();
            
        }

      //  System.out.println("Diffusion  : " + value);
        value-=this.getSeuil();
        this.SetInAndOutput(value);
        
       

    }
    public ArrayList<Net> getEntrees() {
        return Entrees;
    }

    public void setEntrees(ArrayList<Net> Entrees) {
        this.Entrees = Entrees;
    }

    public ArrayList<Net> getOutputs() {
        return Outputs;
    }

    public void setOutputs(ArrayList<Net> Outputs) {
        this.Outputs = Outputs;
    }

    public double getIn() {
        return in;
    }

    public void setIn(double in) {
        this.in = in;
    }

    public double getOutput() {
        return output;
    }

    public void setOutput(double output) {
        this.output = output;
    }

    public double SeuilFunction(double value){
        return Math.tanh(value);
    }

    public double SeuilDerivated(double value){


        return (1 - Math.tanh(value)*Math.tanh(value));
    }

    public void AddEntry(Net before){
        this.getEntrees().add(before);
    }

    public void AddOutput(Net after){
        this.getOutputs().add(after);
    }
    
    public void Display(){

        System.out.println("Neurone - Value:"+this.getOutput() + "\nNet Entry");
        for(Net temp:this.getEntrees() ){
            temp.Display();
        }
        System.out.println("Net outputs");
        for(Net temp:this.getOutputs()){
            temp.Display();
        }
    }

    public void ApplyCorrectionToEntryNet(double Err){
        for(Net temp:this.getEntrees()){
            temp.ApplyCorrection(Err);
        }
    }

    public double getSeuil() {
        return seuil;
    }

    public void setSeuil(double seuil) {
        this.seuil = seuil;
    }
    
}
