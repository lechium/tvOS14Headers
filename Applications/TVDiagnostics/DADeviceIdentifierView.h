//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface DADeviceIdentifierView : UIView
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    UILabel *_identifierLabel;	// 16 = 0x10
    NSLayoutConstraint *_identifierLabelHeightConstraint;	// 24 = 0x18
    UILabel *_serialNumberLabel;	// 32 = 0x20
    NSLayoutConstraint *_serialNumberLabelHeightConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100010164
@property(retain, nonatomic) NSLayoutConstraint *serialNumberLabelHeightConstraint; // @synthesize serialNumberLabelHeightConstraint=_serialNumberLabelHeightConstraint;
@property(retain, nonatomic) UILabel *serialNumberLabel; // @synthesize serialNumberLabel=_serialNumberLabel;
@property(retain, nonatomic) NSLayoutConstraint *identifierLabelHeightConstraint; // @synthesize identifierLabelHeightConstraint=_identifierLabelHeightConstraint;
@property(retain, nonatomic) UILabel *identifierLabel; // @synthesize identifierLabel=_identifierLabel;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)setHeight;	// IMP=0x000000010000ffe8
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000010000ff98
- (void)updateConstraints;	// IMP=0x000000010000f73c
- (void)updateWithDeviceState:(id)arg1;	// IMP=0x000000010000f6cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000f3f8

@end

