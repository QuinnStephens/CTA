//
//  RootViewController.h
//  CTA
//
//  Created by Quinn Stephens on 3/8/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController {
	NSString *xmlstuff;
}

@property(nonatomic,retain) NSString *xmlstuff;

-(IBAction)grabURL:(id)sender;

@end

