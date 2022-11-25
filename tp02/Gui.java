import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Gui extends JFrame {
    JTextArea area;
    JButton prev, next, open, close;
    Client client;

    public Gui(Client client) {
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

        prev = new JButton("Previous ");
        prev.setPreferredSize(new Dimension(80, 20));
        prev.addActionListener(new DoItListener( ));
        secondPanel.add(prev);

        next = new JButton("Next ");
        next.setPreferredSize(new Dimension(80, 20));
        next.addActionListener(new DoItListener( ));
        secondPanel.add(next);

        open = new JButton("Open ");
        open.setPreferredSize(new Dimension(80, 20));
        open.addActionListener(new DoItListener( ));
        secondPanel.add(open);

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
