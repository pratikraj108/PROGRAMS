package com.example.voting;

import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class VoteActivity extends AppCompatActivity {

    TextView tvResult;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_vote);

        int age = getIntent().getIntExtra("age", 0);

        TextView tvAge = findViewById(R.id.tvAge);
        tvAge.setText("Your age is " + age);

        tvResult = findViewById(R.id.tvResult);

        Button btnBJP = findViewById(R.id.btnBJP);
        Button btnJDU = findViewById(R.id.btnJDU);

        btnBJP.setOnClickListener(v -> {
            tvResult.setText("You voted for BJP");
            tvResult.setVisibility(TextView.VISIBLE);
            btnBJP.setEnabled(false);
            btnJDU.setEnabled(false);
        });

        btnJDU.setOnClickListener(v -> {
            tvResult.setText("You voted for JDU");
            tvResult.setVisibility(TextView.VISIBLE);
            btnBJP.setEnabled(false);
            btnJDU.setEnabled(false);
        });

        Button btnBack = findViewById(R.id.btnBack);
        btnBack.setOnClickListener(v -> finish());
    }
}