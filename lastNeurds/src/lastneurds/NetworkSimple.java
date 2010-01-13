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
public class NetworkSimple {
    private HiddenLayer layer;
    private Neuron outputNeuron;

    NetworkSimple(int NbrNeurons,int NbrEntries){
       

           
    
    //on crée la couche
    this.layer = new HiddenLayer(NbrNeurons);
    this.outputNeuron = new Neuron();
    this.layer.ConnectOutputNeuron(this.outputNeuron);
    


    //pour chacune des entrées on crée un Net vers un Neurones
    for(int i = 0; i< NbrEntries;i++){
        for(Neuron temp:this.layer.getNeurones()){
            Net net = new Net();
            net.Link(null, temp);
            
        }

        
    }

   
   
    }

 
    public HiddenLayer getLayer() {
        return layer;
    }

    public void setLayer(HiddenLayer layer) {
        this.layer = layer;
    }

    public Neuron getOutput() {
        return outputNeuron;
    }

    public void setOutput(Neuron output) {
        this.outputNeuron = output;
    }
    public void Display(){
        System.out.println("NetworkSimple with " + this.layer.getNeurones().size());
        this.layer.Display();

    }

    public double Learn(Truth exemple,double learningRate){
        //On diffuse d'abord
        //sur chaque neurone de la couche cachée
        for(Neuron temp:this.layer.getNeurones()){
            temp.Diffuse(exemple);
        }

        //on diffuse le neurone de sortie
        this.outputNeuron.Diffuse();
        // System.out.println("Valeur de la sortie du Neurone après la diffusion : " + this.outputNeuron.getOutput());

        //On peut calculer le gradient sur le neurone de sortie
        double ydes = exemple.getOutput();
        double ycalc = this.outputNeuron.getOutput();
       // System.out.println("Après la diffusion précédente, ycalc :" +ycalc);

        double g_a = this.outputNeuron.getDerivated();
        double Errk = -1*(ydes - ycalc)*g_a;
        double error = 0.5*(ydes - ycalc)*(ydes-ycalc);
        //on applique le gradient sur le neurone de sortie
        this.outputNeuron.ApplyCorrectionToEntryNet(Errk*learningRate*-1);

        //on fait maintenant sur la couche de neurones cachées
        for(Neuron temp:this.layer.getNeurones()){

            double Errj = Errk*temp.getOutputs().get(0).getWeight();
            Errj*=temp.getDerivated();
            //on change le poids des entrées pour ce neurones
            temp.ApplyCorrectionToEntryNet(Errj*learningRate*-1);
            
        }

        
        
        return error;
    }
    public double Learn(ArrayList<Truth> listExemple,double learningRate){
        double error =0;
        for(Truth exemple:listExemple){

            error += this.Learn(exemple,learningRate);
        }
         System.out.println("Erreur :"+error);
        return error;
        
    }

    public double Query(Truth exemple){

        this.getLayer().Diffuse(exemple);
        this.getOutput().Diffuse();
        return this.getOutput().getOutput();
    }
}
