using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace LootTableChanger {
    public partial class Form1 : Form {
        public Form1(){
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e) {
            string itemType = richTextBox2.Text; // itemType
            string itemChance = richTextBox3.Text; // itemChance

            bool uvozdetected = false;
            string item = "";
            int r = 0, t = 0;

            for (int i = 0; i < itemType.Length; i++) {
                if (itemType[i] == '"') {
                    if (uvozdetected == true) {
                        uvozdetected = false;
                        if (t == 0) {
                            dataGridView1.Rows.Add();
                            dataGridView1.Rows[r].Cells[0].Value = item + "\"";
                            t = 1;
                        } else {
                            dataGridView1.Rows[r].Cells[1].Value = item + "\"";
                            t = 0;
                            r++;
                        }
                        item = "";
                    } else {
                        uvozdetected = true;
                    }
                }
                if (uvozdetected) {
                    item += itemType[i];
                }
            }



            uvozdetected = false;
            item = itemChance.Substring(1, itemChance.Length - 2);

            string[] chances = item.Split(',');

            if (chances.Length != r) {
                MessageBox.Show("Unable to do the complete import because the count of items in itemType and itemChance does not corresponds!");
            } else {
                for (int i = 0; i < chances.Length; i++) {
                    dataGridView1.Rows[i].Cells[2].Value = chances[i];
                }
                //button2.Enabled = true;
            }
            
        }

        private void button2_Click(object sender, EventArgs e) {
            
            System.IO.StreamWriter file = new System.IO.StreamWriter("lootTable.txt", false);
            
            //itemType
            file.WriteLine("\t\titemType[] = {");
            for (int i = 0; i < (dataGridView1.Rows.Count - 1); i++) {
                file.WriteLine("\t\t\t{ " + dataGridView1.Rows[i].Cells[0].Value + "," + dataGridView1.Rows[i].Cells[1].Value + " },");
            }
            file.WriteLine("\t\t};");

            //itemChance
            file.Write("\t\titemChance[] = {");
            for (int i = 0; i < dataGridView1.Rows.Count; i++) {
                file.Write(dataGridView1.Rows[i].Cells[2].Value + ",");
            }
            file.Write("};");
            file.Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //button2.Enabled = false;
        }
    }
}
