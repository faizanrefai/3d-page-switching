//
//  MainViewController.h
//  DemoProject
//
//  Created by Edward Patel on 2010-02-28.
//  Copyright Memention AB 2010. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate> 
{
	NSInteger buttontag;
}
- (IBAction)showInfo:(id)sender;
-(void)setButtontag:(NSInteger)t;
@end
