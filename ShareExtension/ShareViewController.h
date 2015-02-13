//
//  ShareViewController.h
//  ShareExtension
//
//  Created by TheAppGuruz-New-6 on 07/02/15.
//  Copyright (c) 2015 TheAppGuruz-New-6. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>

@interface ShareViewController : SLComposeServiceViewController
{
    NSUserDefaults *sharedUserDefaults;
    NSExtensionItem *inputItem;
}
@end
