//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface MTTVTextCell : MTTableViewCell <UITextFieldDelegate>
{
    CDUnknownBlockType _textChangedBlock;	// 24 = 0x18
    UITextField *_hiddenTextField;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000996f4
@property(retain, nonatomic) UITextField *hiddenTextField; // @synthesize hiddenTextField=_hiddenTextField;
@property(copy, nonatomic) CDUnknownBlockType textChangedBlock; // @synthesize textChangedBlock=_textChangedBlock;
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000995a8
- (void)showEditTitleUI;	// IMP=0x0000000100099468
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010009937c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

