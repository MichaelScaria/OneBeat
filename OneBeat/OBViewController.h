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

@interface OBViewController : UIViewController {
    AVAudioRecorder *recorder;
    NSTimer *levelTimer;
}

@end
