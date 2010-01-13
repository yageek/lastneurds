/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

import javax.swing.JPanel;
import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import org.jfree.chart.plot.PlotOrientation;

/**
 *
 * @author yaya
 */
public class ErrorView extends JPanel {
    private JFreeChart chart;

    public ErrorView() {
        this.chart = ChartFactory.createXYLineChart(
                "Évolution de l'erreur", "Itérations", "Erreur quadratique", null, PlotOrientation.HORIZONTAL, true, true, true);
        ChartPanel panel = new ChartPanel(this.chart);
        this.add(panel);
        this.setVisible(true);

    }

}
