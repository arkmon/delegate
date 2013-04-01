//
//  FlipsideViewController.h
//  delegate
//
//  Created by Arkadiusz Dowejko on 01/04/2013.
//  Copyright (c) 2013 ArkadiuszDowejko_DamirOkic. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
