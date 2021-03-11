import java.awt.Color;
import java.awt.Font;
import java.awt.Frame;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.border.Border;

class JFrame1 {
    public static void main(String[] args) {
        Border border = BorderFactory.createLineBorder(Color.lightGray);
        ImageIcon img = new ImageIcon("index.png");
        JLabel label = new JLabel(); // create a label
        label.setText("Bash ATM Machine"); // set text of label
        label.setIcon(img);
        label.setHorizontalTextPosition(JLabel.CENTER);
        label.setVerticalTextPosition(JLabel.TOP);
        label.setForeground(new Color(255, 255, 255));
        label.setFont(new Font("MV Boli", Font.PLAIN, 20));
        label.setIconTextGap(15);
        label.setBackground(Color.black);
        label.setOpaque(true);
        label.setBorder(border);
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);
        //label.setBounds(150,150,150,150);

        //BashATM bAtm = new BashATM();
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //frame.setSize(500,500);
        frame.setVisible(true);
        //frame.setResizable(false);
        frame.getContentPane().setBackground(new Color(23,34,40));
        frame.add(label);
        frame.pack();
    }
}