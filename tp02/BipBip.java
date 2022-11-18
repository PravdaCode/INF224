import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class BipBip extends JFrame {
    JTextArea area;
    JButton doIt, close;

    public static void main(String argv[]) {
        new BipBip();
    }

    public BipBip() {
        super.setSize(500, 500);
        super.setTitle("TP02");
        JPanel mainPanel = new JPanel();
        mainPanel.setLayout(new BoxLayout(mainPanel, BoxLayout.Y_AXIS));

        JPanel firstPanel = new JPanel();
        firstPanel.setLayout(new GridLayout(4, 4));
        firstPanel.setMaximumSize(new Dimension(400, 400));

        JPanel secondPanel = new JPanel();
        firstPanel.setLayout(new GridLayout(1, 1));
        firstPanel.setMaximumSize(new Dimension(400, 400));

        area = new JTextArea("Edit Text");
        
        firstPanel.add(area);

        doIt = new JButton("Add ");
        doIt.setPreferredSize(new Dimension(80, 20));
        doIt.addActionListener(new DoItListener( ));
        secondPanel.add(doIt);

        close = new JButton("Close");
        close.setPreferredSize(new Dimension(80, 20));
        close.addActionListener(new CloseListener( ));
        secondPanel.add(close);

        mainPanel.add(firstPanel);
        mainPanel.add(secondPanel);

        super.add(mainPanel);
        System.out.println(area.getRows());
        // area = new JTextArea("Edit Text");
        // super.add(area);
        // doIt = new JButton("button1");
        // doIt.setPreferredSize(new Dimension(40, 40));
        // super.add(doIt);
        // close = new JButton("button2");
        // close.setPreferredSize(new Dimension(0, 0));
        // super.add(close);
        super.setVisible(true);

    }

    class DoItListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            area.append("\n");
        }
    }

    class CloseListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            System.exit(0);
        }
    }
}
