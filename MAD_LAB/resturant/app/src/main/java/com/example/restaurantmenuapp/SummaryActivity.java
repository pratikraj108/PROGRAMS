package com.example.restaurantmenuapp;

import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;

public class SummaryActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_summary);

        ArrayList<String> names = getIntent().getStringArrayListExtra("names");
        ArrayList<Integer> counts = getIntent().getIntegerArrayListExtra("counts");
        ArrayList<Integer> prices = getIntent().getIntegerArrayListExtra("prices");
        int total = getIntent().getIntExtra("total", 0);
        int totalItems = getIntent().getIntExtra("totalItems", 0);

        String details = "";
        for (int i = 0; i < names.size(); i++) {
            details += names.get(i) + " x" + counts.get(i) + " = Rs." + (counts.get(i) * prices.get(i)) + "\n";
        }

        TextView tvDetails = findViewById(R.id.tvDetails);
        TextView tvTotalItems = findViewById(R.id.tvTotalItems);
        TextView tvTotal = findViewById(R.id.tvTotal);

        tvDetails.setText(details);
        tvTotalItems.setText("Total Items: " + totalItems);
        tvTotal.setText("Total Bill: Rs." + total);

        Button btnBack = findViewById(R.id.btnBack);
        btnBack.setOnClickListener(v -> finish());
    }
}