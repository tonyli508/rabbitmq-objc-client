// This source code is dual-licensed under the Mozilla Public License ("MPL"),
// version 1.1 and the Apache License ("ASL"), version 2.0.
//
// The ASL v2.0:
//
// ---------------------------------------------------------------------------
// Copyright 2017 Pivotal Software, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ---------------------------------------------------------------------------
//
// The MPL v1.1:
//
// ---------------------------------------------------------------------------
// The contents of this file are subject to the Mozilla Public License
// Version 1.1 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// https://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License.
//
// The Original Code is RabbitMQ
//
// The Initial Developer of the Original Code is Pivotal Software, Inc.
// All Rights Reserved.
//
// Alternatively, the contents of this file may be used under the terms
// of the Apache Standard license (the "ASL License"), in which case the
// provisions of the ASL License are applicable instead of those
// above. If you wish to allow use of your version of this file only
// under the terms of the ASL License and not to allow others to use
// your version of this file under the MPL, indicate your decision by
// deleting the provisions above and replace them with the notice and
// other provisions required by the ASL License. If you do not delete
// the provisions above, a recipient may use your version of this file
// under either the MPL or the ASL License.
// ---------------------------------------------------------------------------

#import <RMQClientNC/RMQConnection.h>
#import <RMQClientNC/RMQErrors.h>
#import <RMQClientNC/RMQBasicProperties.h>
#import <RMQClientNC/RMQBasicProperties+MergeDefaults.h>
#import <RMQClientNC/RMQFrame.h>
#import <RMQClientNC/RMQHeartbeat.h>
#import <RMQClientNC/RMQMethodDecoder.h>
#import <RMQClientNC/RMQMethodMap.h>
#import <RMQClientNC/RMQMethods+Convenience.h>
#import <RMQClientNC/RMQProtocolHeader.h>
#import <RMQClientNC/RMQURI.h>
#import <RMQClientNC/RMQAllocatedChannel.h>
#import <RMQClientNC/RMQConnectionDelegateLogger.h>
#import <RMQClientNC/RMQConnectionRecover.h>
#import <RMQClientNC/RMQSuspendResumeDispatcher.h>
#import <RMQClientNC/RMQFramesetValidator.h>
#import <RMQClientNC/RMQHandshaker.h>
#import <RMQClientNC/RMQMultipleChannelAllocator.h>
#import <RMQClientNC/RMQReader.h>
#import <RMQClientNC/RMQSynchronizedMutableDictionary.h>
#import <RMQClientNC/RMQTCPSocketTransport.h>
#import <RMQClientNC/RMQUnallocatedChannel.h>
#import <RMQClientNC/RMQGCDSerialQueue.h>
#import <RMQClientNC/RMQSemaphoreWaiterFactory.h>
#import <RMQClientNC/RMQSemaphoreWaiter.h>
#import <RMQClientNC/RMQProcessInfoNameGenerator.h>
#import <RMQClientNC/RMQQueuingConnectionDelegateProxy.h>
#import <RMQClientNC/RMQGCDHeartbeatSender.h>
#import <RMQClientNC/RMQTickingClock.h>
#import <RMQClientNC/RMQPKCS12CertificateConverter.h>
#import <RMQClientNC/RMQTLSOptions.h>
#import <RMQClientNC/RMQTransactionalConfirmations.h>
#import <RMQClientNC/RMQConfirmationTransaction.h>

//! Project version number for RMQClient.
FOUNDATION_EXPORT double RMQClientVersionNumber;

//! Project version string for RMQClient.
FOUNDATION_EXPORT const unsigned char RMQClientVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <RMQClient/PublicHeader.h>


