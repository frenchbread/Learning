package com.example.muze.serviceapp;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.util.Log;

import java.util.concurrent.TimeUnit;

/**
 * Created by muze on 05/12/14.
 */
public class myService extends Service {

    NotificationManager nm;
    final String LOG_TAG = "myLogs";

    public void onCreate() {
        super.onCreate();
        Log.d(LOG_TAG, "onCreate");
        nm = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
    }

    public int onStartCommand(Intent intent, int flags, int startId) {
        Log.d(LOG_TAG, "onStartCommand");
        someTask();
        return super.onStartCommand(intent, flags, startId);
    }

    public void onDestroy() {
        super.onDestroy();
        Log.d(LOG_TAG, "onDestroy");
    }

    public IBinder onBind(Intent intent) {
        Log.d(LOG_TAG, "onBind");
        return null;
    }

    void someTask() {
        new Thread(new Runnable() {
            int ttime = 10;
            int rrest = 5;
            public void run() {
                for (int i = 1; i<=ttime; i++) {
                    Log.d(LOG_TAG, ttime-i + " seconds work left.");
                    try {
                        TimeUnit.SECONDS.sleep(1);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
                for (int j=1; j<=rrest; j++){
                    Log.d(LOG_TAG, rrest-j + " seconds for rest left.");
                    try {
                        TimeUnit.SECONDS.sleep(1);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
                sendNotif();
                stopSelf();
            }
        }).start();
    }
    void sendNotif() {
        Notification notif = new Notification(R.drawable.ic_launcher, "Text in status bar",
                System.currentTimeMillis());

        Intent intent = new Intent(this, MainActivity.class);
        //intent.putExtra(MainActivity.FILE_NAME, "somefile");
        PendingIntent pIntent = PendingIntent.getActivity(this, 0, intent, 0);

        notif.setLatestEventInfo(this, "Super app", "Cycle has finished!", pIntent);

        notif.flags |= Notification.FLAG_AUTO_CANCEL;

        nm.notify(1, notif);
    }
}
