//
//  TestFooWidgetAppDelegate.h
//  TestFooWidget
//
//  Created by Robert Matthews on 7/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestFooWidgetViewController;

@interface TestFooWidgetAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestFooWidgetViewController *viewController;

@end
