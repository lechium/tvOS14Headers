//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageWithConcreteContainerBase.h"

#import "MCMXPCMessageWithKeyValue-Protocol.h"

@class NSObject, NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithKeyValueBase : MCMXPCMessageWithConcreteContainerBase <MCMXPCMessageWithKeyValue>
{
    NSString *_key;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100013908
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000001000137f4

// Remaining properties
@property(readonly, nonatomic) _Bool canBeHandledLocally;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) struct container_client *proxy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

@end

