//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSUUID;

@interface ACAccount (PineBoardAdditions)
- (id)pbd_localOverrideNameForHomeUserIdentifier:(id)arg1;	// IMP=0x00000001000b7230
- (id)pbd_localOverrideNameForItunesAltDSID:(id)arg1;	// IMP=0x00000001000b7058
@property(retain, nonatomic, setter=pbd_setSelectedHomeUserIdentifier:) NSUUID *pbd_selectedHomeUserIdentifier;
@end
