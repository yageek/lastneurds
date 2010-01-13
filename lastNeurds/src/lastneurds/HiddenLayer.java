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
public class HiddenLayer {
    public ArrayList<Neuron> neurones;
    public int size;
    public void Diffuse(Truth exemple){


        for(Neuron temp:this.getNeurones()){
            temp.Diffuse(exemple);
        }
    }
    public HiddenLayer(int size) {

        this.neurones = new ArrayList<Neuron>();
        this.size = size;

        for(int i = 0; i < size;i++){
            this.neurones.add(new Neuron());

            
        }

        
    }
    
    public ArrayList<Neuron> getNeurones() {
        return neurones;
    }

    public void setNeurones(ArrayList<Neuron> neurones) {
        this.neurones = neurones;
    }

    public void Display(){

        for(Neuron temp:this.getNeurones()){
            temp.Display();
            
        }
    }

    public void ConnectOutputNeuron(Neuron output){

        for(Neuron temp:this.getNeurones()){
            Net net = new Net();
            net.Link(temp, output);
        }
    }
}
