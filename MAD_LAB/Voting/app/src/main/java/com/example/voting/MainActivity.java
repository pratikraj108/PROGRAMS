package com.example.voting;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    EditText etAge;
    Button btnCheck;
    TextView tvMessage;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        etAge = findViewById(R.id.etAge);
        btnCheck = findViewById(R.id.btnCheck);
        tvMessage = findViewById(R.id.tvMessage);

        btnCheck.setOnClickListener(v -> {

            String s = etAge.getText().toString();

            if (s.isEmpty()) {
                tvMessage.setText("Please enter age");
                tvMessage.setVisibility(TextView.VISIBLE);
                return;
            }

            int age = Integer.parseInt(s);

            if (age >= 18) {
                Intent i = new Intent(MainActivity.this, VoteActivity.class);
                i.putExtra("age", age);
                startActivity(i);
            } else {
                tvMessage.setText("You are not eligible for voting");
                tvMessage.setVisibility(TextView.VISIBLE);
            }
        });
    }
}