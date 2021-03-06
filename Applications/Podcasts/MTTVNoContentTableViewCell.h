//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface MTTVNoContentTableViewCell : UITableViewCell
{
    NSString *_message;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
}

+ (id)messageFont;	// IMP=0x0000000100091fb0
+ (double)marginBottomForStyle:(unsigned long long)arg1;	// IMP=0x0000000100091f9c
+ (double)heightForStyle:(unsigned long long)arg1;	// IMP=0x0000000100091f1c
+ (id)reuseIdentifier;	// IMP=0x0000000100091f10
- (void).cxx_destruct;	// IMP=0x0000000100092664
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000925b8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000924ec
- (void)layoutSubviews;	// IMP=0x00000001000923b0
- (void)updateTextColors;	// IMP=0x0000000100092344
- (void)configureSubviews;	// IMP=0x000000010009217c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000920a0
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010009208c
- (id)initWithMessage:(id)arg1;	// IMP=0x000000010009202c
- (id)init;	// IMP=0x0000000100091fd0

@end

