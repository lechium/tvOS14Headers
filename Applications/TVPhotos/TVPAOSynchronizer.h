//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPAOSynchronizer : NSObject
{
    id _accessObject;	// 8 = 0x8
}

+ (id)syncAccessObjectWithFactory:(CDUnknownBlockType)arg1;	// IMP=0x000000010005fa60
+ (void)flushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005f9d0
+ (void)initialize;	// IMP=0x000000010005f978
- (void).cxx_destruct;	// IMP=0x000000010005fde8
@property(retain, nonatomic) id accessObject; // @synthesize accessObject=_accessObject;
- (void)queuePostOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000010005fdcc
- (void)queueOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000010005fcf4
- (void)tearDownWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005fbd0
- (id)initWithFactory:(CDUnknownBlockType)arg1;	// IMP=0x000000010005fac8
- (id)init;	// IMP=0x000000010005fab0

@end

