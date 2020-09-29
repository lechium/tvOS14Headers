//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "TVNPRoutingController-Protocol.h"

@class MPAVEndpointRoutingDataSource, MPAVOutputDeviceRoutingDataSource, MPAVRoutingController, NSArray, NSMutableDictionary, NSString, TVCSHomeManager, TVNPRoutingDestination;
@protocol OS_dispatch_queue;

@interface TVNPGroupableRoutingController : NSObject <MPAVRoutingControllerDelegate, TVNPRoutingController>
{
    _Bool _allowsDestinationSelection;	// 8 = 0x8
    _Bool _allowsRetargeting;	// 9 = 0x9
    _Bool _needsAvailableRoutesUpdate;	// 10 = 0xa
    _Bool _multipleSelectionEnabled;	// 11 = 0xb
    NSArray *_availableDestinations;	// 16 = 0x10
    NSArray *_availableRoutes;	// 24 = 0x18
    TVNPRoutingDestination *_currentDestination;	// 32 = 0x20
    NSArray *_currentRoutes;	// 40 = 0x28
    unsigned long long _discoveryMode;	// 48 = 0x30
    NSString *_outputContextUID;	// 56 = 0x38
    NSString *_systemOutputRouteName;	// 64 = 0x40
    MPAVEndpointRoutingDataSource *_endpointRoutingDataSource;	// 72 = 0x48
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;	// 80 = 0x50
    MPAVRoutingController *_endpointRoutingController;	// 88 = 0x58
    MPAVRoutingController *_outputDeviceRoutingController;	// 96 = 0x60
    TVCSHomeManager *_homeManager;	// 104 = 0x68
    NSMutableDictionary *_outputDeviceIdentifiersToRoutes;	// 112 = 0x70
    NSMutableDictionary *_endpointIdentifiersToDestinations;	// 120 = 0x78
    NSArray *_allOutputDevices;	// 128 = 0x80
    NSArray *_allEndpoints;	// 136 = 0x88
    NSString *_currentEndpointRouteUID;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_updateQueue;	// 152 = 0x98
    unsigned long long _numberOfUpdates;	// 160 = 0xa0
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000000488c
- (void).cxx_destruct;	// IMP=0x0000000000008070
@property(readonly, nonatomic) _Bool multipleSelectionEnabled; // @synthesize multipleSelectionEnabled=_multipleSelectionEnabled;
@property(readonly, nonatomic) _Bool needsAvailableRoutesUpdate; // @synthesize needsAvailableRoutesUpdate=_needsAvailableRoutesUpdate;
@property(readonly, nonatomic) unsigned long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(readonly, copy, nonatomic) NSString *currentEndpointRouteUID; // @synthesize currentEndpointRouteUID=_currentEndpointRouteUID;
@property(readonly, copy, nonatomic) NSArray *allEndpoints; // @synthesize allEndpoints=_allEndpoints;
@property(readonly, copy, nonatomic) NSArray *allOutputDevices; // @synthesize allOutputDevices=_allOutputDevices;
@property(readonly, copy, nonatomic) NSMutableDictionary *endpointIdentifiersToDestinations; // @synthesize endpointIdentifiersToDestinations=_endpointIdentifiersToDestinations;
@property(readonly, copy, nonatomic) NSMutableDictionary *outputDeviceIdentifiersToRoutes; // @synthesize outputDeviceIdentifiersToRoutes=_outputDeviceIdentifiersToRoutes;
@property(readonly, nonatomic) TVCSHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) MPAVRoutingController *outputDeviceRoutingController; // @synthesize outputDeviceRoutingController=_outputDeviceRoutingController;
@property(readonly, nonatomic) MPAVRoutingController *endpointRoutingController; // @synthesize endpointRoutingController=_endpointRoutingController;
@property(readonly, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // @synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource;
@property(readonly, nonatomic) MPAVEndpointRoutingDataSource *endpointRoutingDataSource; // @synthesize endpointRoutingDataSource=_endpointRoutingDataSource;
@property(readonly, copy, nonatomic) NSString *systemOutputRouteName; // @synthesize systemOutputRouteName=_systemOutputRouteName;
@property(nonatomic) _Bool allowsRetargeting; // @synthesize allowsRetargeting=_allowsRetargeting;
@property(copy, nonatomic) NSString *outputContextUID; // @synthesize outputContextUID=_outputContextUID;
@property(nonatomic) unsigned long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(readonly, copy, nonatomic) NSArray *currentRoutes; // @synthesize currentRoutes=_currentRoutes;
@property(retain, nonatomic) TVNPRoutingDestination *currentDestination; // @synthesize currentDestination=_currentDestination;
@property(readonly, copy, nonatomic) NSArray *availableRoutes; // @synthesize availableRoutes=_availableRoutes;
@property(readonly, copy, nonatomic) NSArray *availableDestinations; // @synthesize availableDestinations=_availableDestinations;
@property(readonly, nonatomic) _Bool allowsDestinationSelection; // @synthesize allowsDestinationSelection=_allowsDestinationSelection;
- (void)_updateWithAvailableEndpoints:(id)arg1 outputDevices:(id)arg2;	// IMP=0x00000000000066d8
- (id)_endpointRoutesWithForcedLocalRoute:(id)arg1;	// IMP=0x000000000000646c
- (void)_updateAvailableRoutes;	// IMP=0x0000000000005e0c
- (void)_setNeedsDisplayedRoutesUpdate;	// IMP=0x0000000000005ca4
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;	// IMP=0x0000000000005c98
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000005c8c
- (void)targetDestination:(id)arg1;	// IMP=0x0000000000005b74
- (void)unpickRoute:(id)arg1 forDestination:(id)arg2;	// IMP=0x00000000000057e0
- (void)pickRoute:(id)arg1 forDestination:(id)arg2;	// IMP=0x000000000000505c
- (void)_updateAllowsDestinationSelection;	// IMP=0x0000000000004fc8
- (void)dealloc;	// IMP=0x0000000000004ce8
- (id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(_Bool)arg2 initalFetchCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004930
- (id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(_Bool)arg2;	// IMP=0x0000000000004920
- (id)init;	// IMP=0x000000000000490c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

