package damir.android_todoapp.com.rock_scissor_paper_game;

import java.util.Random;
import java.lang.*;

import android.app.Activity;
import android.app.AlertDialog;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Toast;
import android.widget.TextView;
import android.widget.EditText;
import android.widget.Button;

public class MainActivity extends Activity {

    int cnt; //사용자가 입력한 횟수
    int[] ran = new int[3]; //난수 발생
    int[] num = new int[3]; //사용자가 입력한 숫자배열
    int strike;
    int ball;

    EditText edit; //사용자가 입력하는 컨트롤
    TextView result_strike; //strike 처리결과
    TextView result_ball; //ball 처리결과
    TextView info;

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        cnt = 0;

        edit = (EditText)findViewById(R.id.EditText1);
        result_strike = (TextView)findViewById(R.id.text01); //strike의 개수를 보여줌
        result_ball = (TextView)findViewById(R.id.text02); //ball의 개수를 보여줌
        info = (TextView)findViewById(R.id.TextView01);

        findViewById(R.id.Button1).setOnClickListener(howGame);
        findViewById(R.id.Button2).setOnClickListener(gameStart);
        findViewById(R.id.Button3).setOnClickListener(enter);
    }


    Button.OnClickListener gameStart = new Button.OnClickListener() {
        public void onClick(View v) {
            Toast.makeText(MainActivity.this,"Start the game.", Toast.LENGTH_LONG).show();

            info.setText("Please enter the three numbers. \n (No duplicate numbers input)");
            for (int i = 0; i < ran.length; i++) { //ran의 크기만큼 반복
                ran[i] = new Random().nextInt(9) + 1; //1~9까지의 숫자를 i번에 저장
                //난수 중복체크
                for (int j = 0; j < i; j++) {
                    if (ran[i] == ran[j]) {
                        i--;
                        break;
                    }
                }
            }
        }
    };

    Button.OnClickListener howGame = new Button.OnClickListener(){
        public void onClick(View v) {
            AlertDialog.Builder alert = new AlertDialog.Builder(MainActivity.this);
            alert.setTitle("Game Description");
            alert.setMessage("Get it right numbers to win a baseball game is a game for three random numbers.");
            alert.setPositiveButton("Confirm", null);
            alert.show();
        }
    };

    Button.OnClickListener enter = new Button.OnClickListener(){
        public void onClick(View v){
            cnt++; //버튼이 눌릴 때 마다 횟수 증가
            strike = 0;
            ball = 0;
            for(int k=0;k<num.length;k++){
                num[k] = edit.getText().charAt(k) - 48;

            }
            //EditText에 입력한 숫자를 Char형으로 받아와서 num배열에 저장
            //CharAt()메소드는 지정된 위치에 있는 문자를 알려주는 메소드, index번호는 0부터 시작
            //ASCII코드표에 의해 48이나 문자 '0'을 빼주어야 숫자로 인식함

            for(int i=0;i<ran.length;i++){
                for(int j=0;j<num.length;j++){
                    if(ran[i] == num[j]){
                        if(i==j){
                            strike++;

                        }
                        else {
                            ball++;

                        }
                    }
                }
            }


            if (strike != 3) {
                result_strike.setText(Integer.toString(strike));
                result_ball.setText(Integer.toString(ball));
                Toast.makeText(MainActivity.this, strike+" strike, "+ball+" It is seen. ", Toast.LENGTH_SHORT).show();
            }

            if(strike == 3){
                strike=0;
                ball=0;

                result_strike.setText(Integer.toString(strike));
                result_ball.setText(Integer.toString(ball));

                AlertDialog.Builder alert2 = new AlertDialog.Builder(MainActivity.this);
                alert2.setMessage(cnt+"It just fits the times.\n" + "To resume the game, press the Start button Games.");
                alert2.setPositiveButton("Confirm",null);
                alert2.show();
                info.setText("Press the button to start the game.");

            }
        }
    };

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
