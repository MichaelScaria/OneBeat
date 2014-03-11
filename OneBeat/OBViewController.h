//
//  OBViewController.h
//  OneBeat
//
//  Created by Michael Scaria on 3/11/14.
//  Copyright (c) 2014 MichaelScaria. All rights reserved.
//

#import <UIKit/UIKit.h>

@import AVFoundation;
@import CoreAudio;
@import CoreBluetooth;

@interface OBViewController : UIViewController <AVAudioRecorderDelegate, CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBPeripheralDelegate>{
    AVAudioRecorder *recorder;
    NSTimer *levelTimer;
    float value, increment;
}

@property (strong, nonatomic) CBCentralManager *centralManager;
@property (strong, nonatomic) CBPeripheral *discoveredPeripheral;
@property (strong, nonatomic) NSMutableData *data;

@end
