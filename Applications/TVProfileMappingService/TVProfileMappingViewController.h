//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableDictionary, NSString, TVSUITextAlertController;
@protocol TVProfileMappingViewControllerDelegate;

@interface TVProfileMappingViewController : UIViewController
{
    id <TVProfileMappingViewControllerDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_map;	// 16 = 0x10
    NSString *_appName;	// 24 = 0x18
    NSArray *_profiles;	// 32 = 0x20
    NSArray *_users;	// 40 = 0x28
    TVSUITextAlertController *_alertController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100005624
@property(retain, nonatomic) TVSUITextAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property(nonatomic) __weak id <TVProfileMappingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)preferredFocusEnvironments;	// IMP=0x00000001000054c4
- (void)viewDidLoad;	// IMP=0x0000000100004788
- (id)initWithMap:(id)arg1 allProfiles:(id)arg2 allUsers:(id)arg3 appName:(id)arg4;	// IMP=0x0000000100004488

@end

