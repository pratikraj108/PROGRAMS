package com.example.restaurantmenuapp;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    String[] itemNames = {"Butter Chicken", "Paneer Tikka", "Dal Makhani", "Biryani", "Naan", "Mango Lassi", "Samosa", "Gulab Jamun", "Masala Chai"};
    int[] itemPrices = {220, 180, 150, 260, 40, 80, 60, 90, 30};
    int[] itemCounts = new int[9];
    TextView[] countViews = new TextView[9];

    int total = 0;
    int totalItems = 0;

    TextView tvTotal;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tvTotal = findViewById(R.id.tvTotal);

        int[] addIds = {R.id.btnAdd0, R.id.btnAdd1, R.id.btnAdd2, R.id.btnAdd3, R.id.btnAdd4, R.id.btnAdd5, R.id.btnAdd6, R.id.btnAdd7, R.id.btnAdd8};
        int[] removeIds = {R.id.btnRemove0, R.id.btnRemove1, R.id.btnRemove2, R.id.btnRemove3, R.id.btnRemove4, R.id.btnRemove5, R.id.btnRemove6, R.id.btnRemove7, R.id.btnRemove8};
        int[] countIds = {R.id.tvCount0, R.id.tvCount1, R.id.tvCount2, R.id.tvCount3, R.id.tvCount4, R.id.tvCount5, R.id.tvCount6, R.id.tvCount7, R.id.tvCount8};

        for (int i = 0; i < 9; i++) {
            countViews[i] = findViewById(countIds[i]);
            final int index = i;

            findViewById(addIds[i]).setOnClickListener(v -> {
                itemCounts[index]++;
                total += itemPrices[index];
                totalItems++;
                countViews[index].setText(String.valueOf(itemCounts[index]));
                tvTotal.setText("Total: Rs." + total);
            });

            findViewById(removeIds[i]).setOnClickListener(v -> {
                if (itemCounts[index] > 0) {
                    itemCounts[index]--;
                    total -= itemPrices[index];
                    totalItems--;
                    countViews[index].setText(String.valueOf(itemCounts[index]));
                    tvTotal.setText("Total: Rs." + total);
                }
            });
        }

        Button btnCalculate = findViewById(R.id.btnCalculate);
        btnCalculate.setOnClickListener(v -> {
            if (totalItems == 0) {
                tvTotal.setText("Please add at least one item");
                return;
            }

            ArrayList<String> names = new ArrayList<>();
            ArrayList<Integer> counts = new ArrayList<>();
            ArrayList<Integer> prices = new ArrayList<>();

            for (int i = 0; i < 9; i++) {
                if (itemCounts[i] > 0) {
                    names.add(itemNames[i]);
                    counts.add(itemCounts[i]);
                    prices.add(itemPrices[i]);
                }
            }

            Intent intent = new Intent(MainActivity.this, SummaryActivity.class);
            intent.putStringArrayListExtra("names", names);
            intent.putIntegerArrayListExtra("counts", counts);
            intent.putIntegerArrayListExtra("prices", prices);
            intent.putExtra("total", total);
            intent.putExtra("totalItems", totalItems);
            startActivity(intent);
        });
    }
}