//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMContainerSchemaAction-Protocol.h"

@class MCMContainerSchemaContext, NSString;

@interface MCMContainerSchemaActionBase : NSObject <MCMContainerSchemaAction>
{
    MCMContainerSchemaContext *_context;	// 8 = 0x8
}

+ (void)_resolveArguments:(id)arg1 toPathArgument:(id *)arg2 context:(id)arg3;	// IMP=0x000000010001adc0
+ (void)_resolveArguments:(id)arg1 toSourcePathArgument:(id *)arg2 destPathArgument:(id *)arg3 context:(id)arg4;	// IMP=0x000000010001aa60
+ (id)actionIdentifier;	// IMP=0x000000010001aa54
+ (id)actionWithName:(id)arg1 arguments:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001a770
- (void).cxx_destruct;	// IMP=0x000000010001a764
@property(readonly, nonatomic) MCMContainerSchemaContext *context; // @synthesize context=_context;
- (_Bool)fixPermissionsWithError:(id *)arg1;	// IMP=0x000000010001a6d0
- (_Bool)performWithError:(id *)arg1;	// IMP=0x000000010001a644
- (_Bool)makedirAtURL:(id)arg1 followTerminalSymlink:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010001a058
- (_Bool)backupFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000199e4
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;	// IMP=0x0000000100019950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

