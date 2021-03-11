import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
public class BashATM extends JFrame{

    BashATM() {
        //this.setText("Bash ATM Machine");
        this.setTitle("Bash ATM Machine");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.setSize(500,500);
        this.setVisible(true);
        ImageIcon img = new ImageIcon("index.png");
        this.setIconImage(img.getImage());
        this.getContentPane().setBackground(new Color(23,34,40));

    }
}
