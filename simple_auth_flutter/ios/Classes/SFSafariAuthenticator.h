//
//  SFSafariAuthenticator.h
//  Pods-Runner
//
//  Created by James Clancey on 6/6/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Flutter/Flutter.h>
#import "WebAuthenticator.h"
#import <SafariServices/SafariServices.h>

@interface SFSafariAuthenticator : NSObject
+ (SFSafariAuthenticator *) shared;
+ (void) presentAuthenticator:(WebAuthenticator *)authenticator;
+ (void) presentAuthenticatorFromViewController:(WebAuthenticator *)authenticator viewController:(UIViewController*)viewController;
-(void) beginAuthentication:(WebAuthenticator *)authenticator viewController:(UIViewController *)viewController;
@end
