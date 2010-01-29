//
//  SimpleRTMAppDelegate.h
//  SimpleRTM
//
//  Created by Gregamel on 1/27/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EVRZRtmApi.h"
#import <BWToolkitFramework/BWToolkitFramework.h>
#import "RTMHelper.h"

@interface SimpleRTMAppDelegate : NSObject <NSApplicationDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    NSWindow *window;
	NSPanel *addTaskPanel;
	EVRZRtmApi *rtmController;
	NSMutableArray *lists;
	NSDictionary *currentList;
	NSMutableArray *tasks;
	IBOutlet BWTransparentPopUpButton *listPopUp;
	IBOutlet BWTransparentTableView *taskTable;
	IBOutlet NSTextField *addTaskField;
	
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSPanel *addTaskPanel;
-(IBAction)listSelected:(id)sender;
-(IBAction)showAddTask:(id)sender;
-(IBAction)addTaskClicked:(id)sender;
-(IBAction)closeSheet:(id)sender;
-(IBAction)refresh:(id)sender;
@end
