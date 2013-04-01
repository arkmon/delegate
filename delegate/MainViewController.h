//
//  MainViewController.h
//  delegate
//
//  Created by Arkadiusz Dowejko on 01/04/2013.
//  Copyright (c) 2013 ArkadiuszDowejko_DamirOkic. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
